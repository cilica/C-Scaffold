#ifndef MOCK_MPS_H
#define MOCK_MPS_H

#include "gmock/gmock.h"
#include <memory>

extern "C"
{
}

class FooInterface
{
public:
  virtual ~FooInterface(){};
  virtual void Foo_Resume() = 0;
  virtual char Foo_GetOtherNumber() = 0;
};

class MockFoo : public FooInterface
{
public:
  virtual ~MockFoo(){};
  MOCK_METHOD0(Foo_Resume, void());
  MOCK_METHOD0(Foo_GetOtherNumber, char());
};
#endif