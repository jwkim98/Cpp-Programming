//
// Created by jwkim98 on 3/20/19.
//

#ifndef CPP_WEAK1_EXAMPLECLASS_HPP
#define CPP_WEAK1_EXAMPLECLASS_HPP

namespace CppStudy {
    class Example {
    public:
        Example();

        explicit Example(int member);

        ~Example();

    private:
        int _member = 0;
    };
}

#endif //CPP_WEAK1_EXAMPLECLASS_HPP
