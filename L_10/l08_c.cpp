#include <iostream>

bool SafeDiv(int dividend,int divisor, int &pResult)
{
    __try
    {
        *pResult = dividend / divisor;
    }
    __except (GetExceptionCode() == EXCEPTION_INT_DIVIDE_BY_ZERO ?
        EXCEPTION_EXECUTE_HANDLER : EXCEPTION_CONTINUE_SEARCH)
    {
        std::cerr << "Error! Integer division by zero\n";
        return FALSE;
    }
    return TRUE;
}


int main()
{
    int A = 25, B = 5, C = 0;
    std::cout << "A " << std::endl;
    std::cin >> A;
    std::cout << "B " << std::endl;
    std::cin >> B;

    SafeDiv(A, B, &C);
        std::cout << "A/B="<<C<<std::endl;
    return 0;
}

