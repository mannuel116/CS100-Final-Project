#include "../header/EntityData.h"
#include <iostream>

int main(){
    EntityData test;

    test.setMaxHealth(30);
    cout << test.CurrentHealth() << '/' << test.MaxHealth() << endl;
    test.addCurrentHealth(-5);
    cout << test.CurrentHealth() << '/' << test.MaxHealth() << endl;
    test.addCurrentHealth(10);
    cout << test.CurrentHealth() << '/' << test.MaxHealth() << endl;
    
    return 0;
}