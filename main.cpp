#include <iostream>
#include <string>
using namespace std;

// Base class
class Character {
protected:
    string name;
    int level;

public:
    void setCharacter(string n, int lvl) {
        name = n;
        level = lvl;
    }

    void displayCharacter() {
        cout << "Character: " << name << endl;
        cout << "Level: " << level << endl;
    }
};

// Child class 1
class Warrior : public Character {
private:
    int strength;

public:
    void setWarrior(int str) {
        strength = str
    }

    void displayWarrior() {
        cout << "Strength: " << strength << endl;
    }
};

// Child class 2
class Mage : public Character {
private:
    int mana;

public:
    void setMage(int mna) {
        mana = mna;
    }

    void displayMage() {
        cout << "Mana: " << mana << endl;
    }
};

int main() {
    Warrior hero;
    Mage wizard;

    hero.setCharacter("Knight", 15);
    hero.setWarrior(80);

    wizard.setCharacter("Sorcerer", 20);
    wizard.setMage(120);

    hero.displayCharacter();
    hero.displayWarrior();

    wizard.displayCharacter()
    wizard.displayMage();

    return 0;
}
