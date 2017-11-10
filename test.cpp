#include "test.h"

test::test(){
}

void test::tests(){
  int score=0;
  int temp;
  temp = test1();
  score=score+temp;
  std::cout << "test 1: "<<pf(temp) << '\n'<< '\n';
  temp = test2();
  score=score+temp;
  std::cout << "test 2: "<<pf(temp )<< '\n'<< '\n';
  temp = test3();
  score=score+temp;
  std::cout << "test 3: "<<pf(temp )<< '\n'<< '\n';
  temp = test4();
  score=score+temp;
  std::cout << "test 4: "<<pf(temp )<< '\n'<< '\n';
  temp = test5();
  score=score+temp;
  std::cout << "test 5: "<<pf(temp )<< '\n'<< '\n';
  temp = test6();
  score=score+temp;
  std::cout << "test 6: "<<pf(temp )<< '\n'<< '\n';
  temp = test7();
  score=score+temp;
  std::cout << "test 7: "<<pf(temp )<< '\n'<< '\n';
  temp = test8();
  score=score+temp;
  std::cout << "test 8: "<<pf(temp )<< '\n'<< '\n';
  temp = test9();
  score=score+temp;
  std::cout << "test 9: "<<pf(temp )<< '\n'<< '\n';
  temp = test10();
  score=score+temp;
  std::cout << "test 10: "<<pf(temp )<< '\n'<< '\n';
  temp = test11();
  score=score+temp;
  std::cout << "test 11: "<<pf(temp )<< '\n'<< '\n';
  temp = test12();
  score=score+temp;
  std::cout << "test 12: "<<pf(temp )<< '\n'<< '\n';
  temp = test13();
  score=score+temp;
  std::cout << "test 13: "<<pf(temp )<< '\n'<< '\n';
  temp = test14();
  score=score+temp;
  std::cout << "test 14: "<<pf(temp )<< '\n'<< '\n';
  temp = test15();
  score=score+temp;
  std::cout << "test 15: "<<pf(temp )<< '\n'<< '\n';
  temp = test16();
  score=score+temp;
  std::cout << "test 16: "<<pf(temp )<< '\n'<< '\n';
  temp = test17();
  score=score+temp;
  std::cout << "test 17: "<<pf(temp )<< '\n'<< '\n';
  temp = test18();
  score=score+temp;
  std::cout << "test 18: "<<pf(temp )<< '\n'<< '\n';
  temp = test19();
  score=score+temp;
  std::cout << "test 19: "<<pf(temp )<< '\n'<< '\n';
  temp = test20();
  score=score+temp;
  std::cout << "test 20: "<<pf(temp )<< '\n'<< '\n';
  temp = test21();
  score=score+temp;
  std::cout << "test 21: "<<pf(temp )<< '\n'<< '\n';
  temp = test22();
  score=score+temp;
  std::cout << "test 22: "<<pf(temp )<< '\n'<< '\n';
  temp = test23();
  score=score+temp;
  std::cout << "test 23: "<<pf(temp )<< '\n'<< '\n';
  temp = test24();
  score=score+temp;
  std::cout << "test 24: "<<pf(temp )<< '\n'<< '\n';
  temp = test25();
  score=score+temp;
  std::cout << "test 25: "<<pf(temp )<< '\n'<< '\n';
  temp = test26();
  score=score+temp;
  std::cout << "test 26: "<<pf(temp )<< '\n'<< '\n';
  temp = test27();
  score=score+temp;
  std::cout << "test 27: "<<pf(temp )<< '\n'<< '\n';
  temp = test28();
  score=score+temp;
  std::cout << "test 28: "<<pf(temp )<< '\n'<< '\n';
  temp = test29();
  score=score+temp;
  std::cout << "test 29: "<<pf(temp )<< '\n'<< '\n';
  temp = test30();
  score=score+temp;
  std::cout << "test 30: "<<pf(temp )<< '\n'<< '\n';
  temp = test31();
  score=score+temp;
  std::cout << "test 31: "<<pf(temp )<< '\n'<< '\n';
  temp = test32();
  score=score+temp;
  std::cout << "test 32: "<<pf(temp )<< '\n'<< '\n';
  temp = test33();
  score=score+temp;
  std::cout << "test 33: "<<pf(temp )<< '\n'<< '\n';
  temp = test34();
  score=score+temp;
  std::cout << "test 34: "<<pf(temp) << '\n'<< '\n';
  std::cout<< score<<" out of 34 correct\n";
}

bool test::test1(){std::cout<<" tests is empty on an empty list\n";
  LinkedListOfInts mylist;
  if(mylist.isEmpty()==1){
    return 1;
  }else{
    return 0;
  }
}

bool test::test2(){std::cout<<" size on an empty list\n";
  LinkedListOfInts mylist;
  //mylist
  if(mylist.size()==0){
    return 1;
  }else{
    return 0;
  }
}

bool test::test3(){std::cout<<" tests add front and size.\n";
  LinkedListOfInts mylist;
  mylist.addFront(5);
  if(mylist.size()==1){
    mylist.removeBack();
    mylist.removeFront();
    return 1;
  }else{
    return 0;
  }
}

bool test::test4(){std::cout<<" tests size and add back\n";
  LinkedListOfInts mylist;
  mylist.addBack(5);
  if(mylist.size()==1){
    mylist.removeBack();
    mylist.removeFront();
    return 1;
  }else{
    return 0;
  }
}

bool test::test5(){std::cout<<" tests remove back and size on a list of one\n";
  LinkedListOfInts mylist;
  mylist.addBack(5);
  //mylist.removeBack();
  std::cout << " remove back:"<<mylist.removeBack()<<"\n"<< " size:"<<mylist.size()<<"\n isempty:"<<mylist.isEmpty() << '\n';
  if(mylist.size()==0){
    return 1;
  }else{
    return 0;
  }
}

bool test::test6(){std::cout<<" tests is empty after remove back on list of one\n";
  LinkedListOfInts mylist;
  mylist.addBack(5);
  mylist.removeBack();
  if(mylist.isEmpty()==1){
    return 1;
  }else{
    return 0;
  }
}

bool test::test7(){std::cout<<" tests is empty after remove front on list of one\n";
  LinkedListOfInts mylist;
  mylist.addBack(5);
  mylist.removeFront();
  if(mylist.isEmpty()==1){
    return 1;
  }else{
    return 0;
  }
}

bool test::test8(){std::cout<<" tests size after remove front on list of one\n";
  LinkedListOfInts mylist;
  mylist.addBack(5);
  std::cout << " remove front:"<<mylist.removeFront()<<"\n";
  if(mylist.size()==0){
    return 1;
  }else{
    return 0;
  }
}

bool test::test9(){std::cout<<" tests size after remove front on list of 2\n";
  LinkedListOfInts mylist;
  mylist.addBack(5);
  mylist.addBack(6);
  std::cout << " remove front:"<<mylist.removeFront()<<"\n";
  if(mylist.size()==1){
    return 1;
  }else{
    return 0;
  }
}

bool test::test10(){std::cout<<" tests size after remove back on list of 2\n";
  LinkedListOfInts mylist;
  mylist.addBack(5);
  mylist.addBack(6);
  std::cout << " remove back:"<<mylist.removeBack()<<"\n";
  if(mylist.size()==1){
    return 1;
  }else{
    return 0;
  }
}

bool test::test11(){std::cout<<" tests isempty after remove back on list of 2\n";
  LinkedListOfInts mylist;
  mylist.addBack(5);
  mylist.addBack(6);
  std::cout <<" isEmpty:"<<mylist.isEmpty()<<"\n"<< " remove back:"<<mylist.removeBack()<<"\n"<<" isEmpty:"<<mylist.isEmpty()<<"\n";
  if(mylist.isEmpty()==0){
    return 1;
  }else{
    return 0;
  }
}

bool test::test12(){std::cout<<" tests is empty after 2 remove back on list of 2\n";
  LinkedListOfInts mylist;
  mylist.addBack(5);
  mylist.addBack(6);
  mylist.removeBack();
  std::cout << " remove back:"<<mylist.removeBack()<<"\n"<<" size:"<<mylist.size()<<"\n"<<" isEmpty:"<<mylist.isEmpty()<<"\n";
  if(mylist.isEmpty()==1){
    return 1;
  }else{
    return 0;
  }
}

bool test::test13(){std::cout<<" tests isempty after remove front on list of 2\n";
  LinkedListOfInts mylist;
  mylist.addBack(5);
  mylist.addBack(6);
  std::cout <<" isEmpty:"<<mylist.isEmpty()<<"\n"<< " remove front:"<<mylist.removeFront()<<"\n"<<" isEmpty:"<<mylist.isEmpty()<<"\n";
  if(mylist.isEmpty()==0){
    return 1;
  }else{
    return 0;
  }
}

bool test::test14(){std::cout<<" tests isempty after 2 remove front on list of 2\n";
  LinkedListOfInts mylist;
  mylist.addBack(5);
  mylist.addBack(6);
  //mylist.removeFront();
  std::cout << " remove Front:"<<mylist.removeFront()<<"\n"<< " remove Front2:"<<mylist.removeFront()<<"\n"<<" size:"<<mylist.size()<<"\n"<<" isEmpty:"<<mylist.isEmpty()<<"\n";
  if(mylist.isEmpty()==1){
    return 1;
  }else{
    return 0;
  }
}

bool test::test15(){std::cout<<" tests 2 remove front truth values on list of 1\n";
  LinkedListOfInts mylist;
  //mylist.addBack(5);
  mylist.addBack(5);
  int x=mylist.removeFront();
  int y=mylist.removeFront();
  std::cout << " remove Front:"<<x<<"\n"<< " remove Front2:"<<y<<"\n"<<" size:"<<mylist.size()<<"\n"<<" isEmpty:"<<mylist.isEmpty()<<"\n";
  if(x==1&&y==0){
    return 1;
  }else{
    return 0;
  }
}

bool test::test16(){std::cout<<" tests 2 remove back truth values on list of 1\n";
  LinkedListOfInts mylist;
  //mylist.addBack(5);
  mylist.addBack(5);
  int x=mylist.removeBack();
  int y=mylist.removeBack();
  std::cout << " remove back:"<<x<<"\n"<< " remove back2:"<<y<<"\n"<<" size:"<<mylist.size()<<"\n"<<" isEmpty:"<<mylist.isEmpty()<<"\n";
  if(x==1&&y==0){
    return 1;
  }else{
    return 0;
  }
}

bool test::test17(){std::cout<<" tests isempty front and size.\n";
  LinkedListOfInts mylist;
  mylist.addFront(5);
  std::cout << " isempty:" <<mylist.isEmpty()<< '\n';
  if(mylist.isEmpty()==0){
    return 1;
  }else{
    return 0;
  }
}

bool test::test18(){std::cout<<" tests isempty and add back\n";
  LinkedListOfInts mylist;
  mylist.addBack(5);
  std::cout << " isempty:" <<mylist.isEmpty()<< '\n';
  if(mylist.isEmpty()==0){
    return 1;
  }else{
    return 0;
  }
}

bool test::test19(){std::cout<<" tests search for exisiting value and add back\n";
  LinkedListOfInts mylist;
  mylist.addBack(5);
  std::cout << " search:" <<mylist.search(5)<< '\n';
  if(mylist.search(5)==1){
    return 1;
  }else{
    return 0;
  }
}

bool test::test20(){std::cout<<" tests search for non exisiting value and add back\n";
  LinkedListOfInts mylist;
  mylist.addBack(5);
  std::cout << " search:" <<mylist.search(7)<< '\n';
  if(mylist.search(6)==0){
    return 1;
  }else{
    return 0;
  }
}

bool test::test21(){std::cout<<" tests search for exisiting values and 2 add back\n";
  LinkedListOfInts mylist;
  mylist.addBack(5);
  mylist.addBack(6);
  std::cout << " search:" <<mylist.search(5)<< '\n'<< " search:" <<mylist.search(6)<< '\n';
  if(mylist.search(5)==1&&mylist.search(6)==1){
    return 1;
  }else{
    return 0;
  }
}

bool test::test22(){std::cout<<" tests search for non exisiting value and 2 add back\n";
  LinkedListOfInts mylist;
  mylist.addBack(5);
  mylist.addBack(6);
  std::cout << " search:" <<mylist.search(7)<< '\n';
  if(mylist.search(7)==0){
    return 1;
  }else{
    return 0;
  }
}

bool test::test23(){std::cout<<" tests search on empty list\n";
  LinkedListOfInts mylist;
  std::cout << " search:" <<mylist.search(7)<< '\n';
  if(mylist.search(7)==0){
    return 1;
  }else{
    return 0;
  }
}

bool test::test24(){std::cout<<" tests search for exisiting values and multiple add back\n";
  LinkedListOfInts mylist;
  for (int i = 0; i < 8; i++) {
    mylist.addBack(i);
  }
  //mylist.addBack(5);
  bool x=true;
  for (int i = 0; i < 8; i++) {
    if(x){
      x=mylist.search(i);
      std::cout << " search("<<i<<"):" <<mylist.search(i)<< '\n';
    }
  }
  //std::cout << " search:" <<mylist.search(5)<< '\n'<< " search:" <<mylist.search(6)<< '\n';
  return x;
}

bool test::test25(){std::cout<<" tests order of add back\n";
  LinkedListOfInts mylist;
  for (int i = 0; i < 8; i++) {
    mylist.addBack(i);
  }
  //int arr[100];
  bool x=true;
  //std::copy(mylist.toVector().begin(), mylist.toVector().end(), arr);
  for (int i = 0; i < mylist.toVector().size(); i++) {

      x=(mylist.toVector()[i]==i);
      std::cout <<" "<< mylist.toVector()[i]<< '\n';

  }
  return x;
}

bool test::test26(){std::cout<<" tests order of add front\n";
  LinkedListOfInts mylist;
  for (int i = 0; i < 8; i++) {
    mylist.addFront(i);
  }
  //int arr[100];
  bool x=true;
  //std::copy(mylist.toVector().begin(), mylist.toVector().end(), arr);
  for (int i = 0; i < mylist.toVector().size(); i++) {

      x=(mylist.toVector()[i]==7-i);
      std::cout <<" "<< mylist.toVector()[i]<< '\n';

  }
  return x;
}

bool test::test27(){std::cout<<" tests order of remove back\n";
  LinkedListOfInts mylist;
  for (int i = 0; i < 8; i++) {
    mylist.addFront(i);
  }
  //int arr[100];
  bool x=true;
  mylist.removeBack();
  //std::copy(mylist.toVector().begin(), mylist.toVector().end(), arr);
  for (int i = 0; i < mylist.toVector().size(); i++) {

      x=(mylist.toVector()[i]==i);
      std::cout <<" "<< mylist.toVector()[i]<< '\n';

  }
  return x;
}

bool test::test28(){std::cout<<" tests order of remove front\n";
  LinkedListOfInts mylist;
  for (int i = 0; i < 8; i++) {
    mylist.addFront(i);
  }
  //int arr[100];
  bool x=true;
  mylist.removeFront();
  //std::copy(mylist.toVector().begin(), mylist.toVector().end(), arr);
  for (int i = 0; i < mylist.toVector().size(); i++) {

      x=(mylist.toVector()[i]==8-i);
      std::cout <<" "<< mylist.toVector()[i]<< '\n';

  }
  return x;
}

bool test::test29(){std::cout<<" tests order of remove front\n";
  LinkedListOfInts mylist;
  //for (int i = 0; i < 8; i++) {
    mylist.addFront(1);
  //}
  //int arr[100];

  mylist.removeFront();
  //std::copy(mylist.toVector().begin(), mylist.toVector().end(), arr);
  std::cout << " search(1)="<< mylist.search(1)<< '\n';
  return !mylist.search(1);
}

bool test::test30(){std::cout<<" tests order of remove front\n";
  LinkedListOfInts mylist;
  //for (int i = 0; i < 2; i++) {
    mylist.addFront(1);
  //}
  //int arr[100];

  mylist.removeBack();
  std::cout << " search(1)="<< mylist.search(1)<< '\n';
  return !mylist.search(1);
}

bool test::test31(){std::cout<<" tests order of remove front\n";
  LinkedListOfInts mylist;
  //for (int i = 0; i < 2; i++) {
    mylist.addFront(1);
  //}
  //int arr[100];

  mylist.~LinkedListOfInts();
  std::cout << " search(1)="<< mylist.search(1)<< '\n';
  return !mylist.search(1);
}

bool test::test32(){std::cout<<" tests order of remove front\n";
  LinkedListOfInts mylist;
  for (int i = 0; i < 8; i++) {
    mylist.addFront(i);
  }
  //int arr[100];

  mylist.~LinkedListOfInts();
  //std::copy(mylist.toVector().begin(), mylist.toVector().end(), arr);
  return mylist.toVector().size()==0;
}

bool test::test33(){std::cout<<" tests order of remove back on empty list\n";
  LinkedListOfInts mylist;

  //std::copy(mylist.toVector().begin(), mylist.toVector().end(), arr);
  return !mylist.removeBack();
}

bool test::test34(){std::cout<<" tests order of remove front on empty list\n";
  LinkedListOfInts mylist;



  //std::1\copy(mylist.toVector().begin(), mylist.toVector().end(), arr);
  return !mylist.removeFront();
}

std::string test::pf(bool x){
  if(x){
    return "Passed";
  }else{
    return "failed";
  }
}
