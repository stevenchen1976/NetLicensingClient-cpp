#ifndef __PRODUCT_H__
#define __PRODUCT_H__

#include "netlicensing/entity.h"

namespace netlicensing {

struct Product : public Entity {
  std::string number_;
  std::string name_;
  bool lic_auto_create_;
  bool in_use_;

  Product() : lic_auto_create_(false), in_use_(false) {}
};

}

#endif //__PRODUCT_H__