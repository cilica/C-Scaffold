#include "foo_mock.h"

extern std::shared_ptr<MockFoo> MockFooObj;

extern "C"
{
    /* Stub C function will forward to the mock */
    void Foo_Resume(void) { MockFooObj->Foo_Resume(); }
    char Foo_GetOtherNumber(void) { return MockFooObj->Foo_GetOtherNumber(); }
}