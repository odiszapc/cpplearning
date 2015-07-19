#include <ctime>
#include <iostream>
#include "datetime.h"

using namespace std;

void datetime() {
  time_t now_utc;
  time(&now_utc);

  struct tm * now_tm = localtime(&now_utc);
  char now_str[100];
  strftime(now_str, sizeof(now_str), "%F %T %z", now_tm);
  cout << now_str << endl;
}
