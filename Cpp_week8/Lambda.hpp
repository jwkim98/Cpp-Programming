//
// Created by jwkim98 on 5/9/19.
//

#ifndef CPP_WEEK8_LAMBDA_HPP
#define CPP_WEEK8_LAMBDA_HPP
#include <string>

namespace Lambda {
class AddString1 {
private:
  const std::string m_str;

public:
  explicit AddString1(std::string str) : m_str(std::move(str)) {}

  // This operator overloading enables calling
  // operator function () on objects of increment
  std::string operator()(const std::string &string) const {
    return m_str + string;
  }
};

class AddString2 {
private:
  std::string &m_str;

public:
  explicit AddString2(std::string &str) : m_str(str) {}

  // This operator overloading enables calling
  // operator function () on objects of increment
  std::string operator()(const std::string &string) const {
    m_str = "Pizza is ";
    return m_str + string;
  }
};

void FunctorExample();

void LambdaExample();

} // namespace Lambda

#endif // CPP_WEEK8_LAMBDA_HPP
