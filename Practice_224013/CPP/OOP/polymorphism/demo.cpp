#include <iostream>
using namespace std;

class Animal {
public:
    void animalSound(){
        cout << "Animal say the sound" << endl;
    }
};

class Pig: public Animal {
public:
    // override from parent
    void animalSound() {
        cout << "Pig say some sounds" << endl;
    }
};

class Dog: public Animal {
public:
    void animalSound() {
        cout << "Dog say some sounds";
    }
};

int main() {
    Animal a;
    a.animalSound();
    Pig p;
    p.animalSound(); // inheritance from parent
    Dog d;
    d.animalSound();
}