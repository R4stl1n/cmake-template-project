#include <myproject/feature.h>

using namespace myproject;

Feature::Feature()
{

}

Feature::~Feature()
{

}

std::string Feature::toString() const
{
  return "Feature";
}

std::string Feature::work() const
{
  return "work";
}
