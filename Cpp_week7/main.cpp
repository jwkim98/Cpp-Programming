#include <cstdio>
#include <iostream>
#include <memory>
#include <mutex>
#include <vector>

/// Move-semantics, Perfect forwarding
/// lvalue rvalue -> more specifically

struct Chicken {
  Chicken(int *price) : m_price_ptr(price) {}

  /// Copy constructor (l-value)
  Chicken(const Chicken &chicken) {
    /// Very costly
    // m_price_ptr = (int*)malloc(sizeof(int)*1000000);
    //        for(int i = 0 ; i < 1000000; i++)
    //        {
    //            m_price_ptr[i] = chicken.m_price_ptr[i];
    //        }
    std::cout << "Copy constructor" << std::endl;
    m_price_ptr = new int(*chicken.m_price_ptr);
  }

  /// Move constructor (r-value)
  Chicken(Chicken &&chicken) noexcept {
    std::cout << "Move constructor" << std::endl;
    m_price_ptr = chicken.m_price_ptr;
    chicken.m_price_ptr = nullptr;
    // delete chicken.m_price_ptr;
    m_vector = std::move(chicken.m_vector);
  }

  Chicken &operator=(Chicken &&chicken) noexcept {
    std::cout << "Move assign operator" << std::endl;
    m_price_ptr = chicken.m_price_ptr;
    chicken.m_price_ptr = nullptr;
  }

  ~Chicken() {
    if (m_price_ptr)
      delete m_price_ptr;
  }

  int *m_price_ptr = nullptr;

  std::vector<int> m_vector;
  //
  //    std::unique_ptr<int> ptr; // only move
  //    std::mutex mtx; // only move
};

struct foo {
public:
  foo(int a, int b, float c) : a(a), b(b), c(c) {}

  int a, b;
  float c;
};

// && -> Must r-value (x) -> (there's possibility to be r-value)
// & -> l-value
struct foo_container {
  template <typename... Ts>
  void push(Ts &&... args) // universal reference (forwarding reference)
  {
    foo_vector.emplace_back(std::forward<Ts>(args)...);
  }

  std::vector<foo> foo_vector;
};

struct functor{

public:
    functor(int a, int b): a(a), b(b)
    {
    }

    int operator()(const int c){

        return a*b*c;
    }

private:
    int a,b;
};

int main() {

  auto functor1 = functor(1, 2);

  int a = 1, b = 2;

  auto lambda1 = [=](int c){ return a * b * c; };

  std::cout<<functor1(3)<<std::endl;

  Chicken chicken1 = Chicken(new int(5));
  Chicken chicken2(new int(1));
  chicken2 = std::move(chicken1);

  std::vector<foo> vect;

  foo foo1(1, 2, 3.0f);

  vect.emplace_back(foo1);
  vect.emplace_back(1, 2, 4.0f);

  std::cout << *chicken2.m_price_ptr << std::endl;

  {
    std::shared_ptr<foo> s_ptr1 = std::make_shared<foo>(0, 1, 1.0f);
    std::shared_ptr<foo> s_ptr2 = s_ptr1;
    std::shared_ptr<foo> s_ptr3 = s_ptr1;

    std::weak_ptr<foo> w_ptr = s_ptr1; // It can dangle

    std::cout << s_ptr1->a << std::endl;
  }

  {
      std::unique_ptr<foo> u_ptr1 = std::make_unique<foo>(0, 1, 2.0f);
      std::unique_ptr<foo> u_ptr2 = std::move(u_ptr1);
  }

  return 0;
}