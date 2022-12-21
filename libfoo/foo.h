#include <iostream>
#include <string>
class IBar;

class Foo
{
public:
    Foo(IBar& bar);
    bool baz(bool useQux);
protected:
    IBar& m_bar;
};

void sliudingWindow(std::string s);