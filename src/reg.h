#ifndef REG_H_
#define REG_H_

#include <caaa/bstrlib.h>
#include <regex.h>

int detect(bstring data, bstring detect);
int replace(bstring data,bstring replace);

#endif // REG_H_
