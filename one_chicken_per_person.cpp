#include <iostream>
using namespace std;

void leftover(int num){
  if(num == 1)
    cout << "Dr. Chaz will have " << num << " piece of chicken left over!";
  else
    cout << "Dr. Chaz will have " << num << " pieces of chicken left over!";
}

void needs(int num){
  if(num == 1)
    cout << "Dr. Chaz needs " << num << " more piece of chicken!";
  else
    cout << "Dr. Chaz needs " << num << " more pieces of chicken!";
}

int main() {
  int people, chicken;

  cin >> people;
  cin >> chicken;

  if (people < chicken)
    leftover(chicken - people);
  else 
    needs(people - chicken);

}
