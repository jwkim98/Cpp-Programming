//
// Created by jwkim98 on 4/22/19.
//

#ifndef METAPROG_TOPOLOGICAL_SORT_HPP
#define METAPROG_TOPOLOGICAL_SORT_HPP

template <typename T, int size> struct Stack {

  T arr[size];
  T index;

  constexpr void initialize() { initialize_helper<size>(); }

  template <int i> constexpr void initialize_helper() {

    if constexpr (i == 0) {
      index = static_cast<T>(0);
      return;
    } else
      initialize_helper<i - 1>();
  }

  constexpr void push(T mem) { arr[++index] = mem; }

  constexpr T pop() { return arr[index]; }

  constexpr T peek() { return arr[index]; }

  template <int i> constexpr bool contains(T elem) {
    if constexpr (elem == arr[i]) {
      return true;
    } else if constexpr (i == 0) {
      return false;
    } else {
      return contains<i - 1>(elem);
    }
  }
};

template <typename T, int size> struct AdjMatrix {
  T arr[size][size];

  constexpr AdjMatrix() = default;

  template <int first> void constexpr initialize()
  {
  }

  template <int first, int second, int... Rest> void constexpr initialize() {
    arr[first][second] = static_cast<T>(1);
    initialize<Rest...>();
  }

  template <int row, int col> constexpr void initialize_col() {
    if constexpr (col == 0)
      return;
    arr[row][col] = static_cast<T>(0);
    initialize_col<col - 1>();
  }

  constexpr T get(int row ,int col) const { return arr[row][col]; }

  template <int row> constexpr T* getConnectedNodes()
  {
      return arr[row];
  }

  template <int row> constexpr void initialize_row() {
    if constexpr (row == 0)
      return;
    initialize_col<row - 1>();
  }
};

template <typename T, int size>
constexpr bool dfs(AdjMatrix<T, size> adj, Stack<T, size> stack, int from, int after)
{
    T visited = adj.get(from, after);
    if constexpr (visited == static_cast<int>(2))
    {
        return false;
    }
    else if constexpr (visited == static_cast<int>(1)) {
        stack.push(from);
        return dfs<T, size>(from+1, after);
    }
    else
        return dfs<T, size>(from, after + 1);

}

template <typename T>
constexpr void dfsAll()
{

}

#endif // METAPROG_TOPOLOGICAL_SORT_HPP
