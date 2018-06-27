#include <iostream>
#include "common.h"

static class MYLIB MyLibInit {
public:
  MyLibInit() ;
  ~MyLibInit() ;
  static void incrementUsers() ;
  static void decrementUsers() ;
private:
  static void initialize() ;
  static void terminate() ;
  static int count_ ;
} MyLibInit_instance ;

void MyLibInit::initialize() {
  std::cerr << "Initialize MyLib !" << std::endl ;
}
 
void MyLibInit::terminate() {
  std::cerr << "Terminate MyLib !" << std::endl ;
}

// ------------------------------------
 
MyLibInit:: MyLibInit() {incrementUsers() ;}
MyLibInit::~MyLibInit() {decrementUsers() ;}
int MyLibInit::count_ = 0 ;
void MyLibInit::incrementUsers() {count_++ ; if(count_ == 1) initialize() ;}
void MyLibInit::decrementUsers() {count_-- ; if(count_ == 0) terminate() ;}
extern "C" MYLIB void MyLibInit_initialize() {MyLibInit::incrementUsers() ;}
extern "C" MYLIB void MyLibInit_terminate()  {MyLibInit::decrementUsers() ;}
