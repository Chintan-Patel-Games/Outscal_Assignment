// #include <iostream>

// class Enemy
// {
// protected:
//     int health;
//     int attackPower;
//     int attackRange;
//     int xp;
//     int level;

// public:
//     Enemy(int _health, int _attackPower, int _attackRange, int _xp, int _level)
//         : health(_health), attackPower(_attackPower), attackRange(_attackRange), xp(_xp), level(_level) {}

//     // Getters and Setters
//     int getHealth() const { return health; }
//     void setHealth(int h) { health = h; }

//     int getAttackPower() const { return attackPower; }
//     void setAttackPower(int ap) { attackPower = ap; }

//     int getAttackRange() const { return attackRange; }
//     void setAttackRange(int ar) { attackRange = ar; }

//     int getXP() const { return xp; }
//     void setXP(int x) { xp = x; }

//     int getLevel() const { return level; }
//     void setLevel(int l) { level = l; }
// };

// class FlyingEnemy : public Enemy
// {
// private:
//     int flyingRadius;

// public:
//     FlyingEnemy(int _health, int _attackPower, int _attackRange, int _xp, int _level, int _flyingRange)
//         : Enemy(_health, _attackPower, _attackRange, _xp, _level), flyingRadius(_flyingRange) {}

//     // Getter and Setter for flyingRadius
//     int getFlyingRadius() const { return flyingRadius; }
//     void setFlyingRadius(int fr) { flyingRadius = fr; }

//     void fly() const
//     {
//         std::cout << "I can fly through the skies!" << std::endl;
//     }
// };

// class GroundEnemy : public Enemy
// {
// private:
//     int patrollingRadius;

// public:
//     GroundEnemy(int _health, int _attackPower, int _attackRange, int _xp, int _level, int _patrollingRadius)
//         : Enemy(_health, _attackPower, _attackRange, _xp, _level), patrollingRadius(_patrollingRadius) {}

//     // Getter and Setter for patrollingRadius
//     int getPatrollingRadius() const { return patrollingRadius; }
//     void setPatrollingRadius(int pr) { patrollingRadius = pr; }

//     void patrol() const
//     {
//         std::cout << "I'm just roaming around here..." << std::endl;
//     }
// };

// int main()
// {
//     FlyingEnemy flyingEnemy(100, 15, 50, 200, 1, 30);
//     GroundEnemy groundEnemy(120, 10, 30, 150, 1, 25);

//     std::cout << "Flying Enemy Health: " << flyingEnemy.getHealth() << std::endl;
//     flyingEnemy.fly();

//     std::cout << "Ground Enemy Health: " << groundEnemy.getHealth() << std::endl;
//     groundEnemy.patrol();

//     return 0;
// }

// Above code was copied from ChatGPT to understand getter setter
// Here's my own code for practice

#include <iostream>

using namespace std;

// Assignment : Inheritance

class Player
{
protected:
    string name;
    int health;
    int attack;

public:
    // Player(string _name, int _health, int _attack) {}

    string GetName() { return name; }
    void SetName(string _name) { name = _name; }

    int GetHealth() { return health; }
    void SetHealth(int _health) { health = _health; }

    int GetAttack() { return attack; }
    void SetAttack(int _attack) { attack = _attack; }

    void DisplayStats()
    {
        cout << " Name : " << GetName() << endl;
        cout << " Health : " << GetHealth() << endl;
        cout << " Attack : " << GetAttack() << endl;
    }
};

class Tanker : public Player
{
protected:
    int defence;

public:
    // Tanker(string _name, int _health, int _attack, int _defence) : Player(_name, _health, _attack) {}
    Tanker()
    {
        cout << " I'm a Tanker. I deal more dmg then anyone else. \n I even got my own shield too to protect my teammates." << endl;
    }

    int GetDefence() { return defence; }
    void SetDefence(int _defence) { defence = _defence; }

    void DisplayDefence()
    {
        cout << " Defence : " << GetDefence() << endl;
    }
};

class Attacker : public Player
{
public:
    // Attacker(string _name, int _health, int _attack) : Player(_name, _health, _attack) {}
    Attacker()
    {
        cout << " I'm an Attacker. I have higher fire rate then anyone else." << endl;
    }
};

class Healer : public Player
{
protected:
    int heal;

public:
    // Healer(string _name, int _health, int _attack, int _heal) : Player(_name, _health, _attack) {}
    Healer()
    {
        cout << " I'm a healer. I have the ability to heal. \n My task is to heal everyone and prevent them to die." << endl;
    }

    int GetHeal() { return heal; }
    void SetHeal(int _heal) { heal = _heal; }

    void DisplayHeal()
    {
        cout << " Heal : " << GetHeal() << endl;
    }
};

int main()
{
    // Tanker tanker("Reinhardt", 525, 125, 800);
    // Attacker attacker("Soldier 76", 325, 30);
    // Healer healer("Kiriko", 225, 100, 25);

    cout << "----------- Tanker Details ------------- " << endl;
    Tanker tanker;
    tanker.SetName("Reinharth");
    tanker.SetHealth(525);
    tanker.SetAttack(125);
    tanker.SetDefence(800);
    // cout << " Name : " << tanker.GetName() << endl;
    // cout << " Health : " << tanker.GetHealth() << endl;
    // cout << " Attack : " << tanker.GetAttack() << endl;
    // cout << " Defence : " << tanker.GetDefence() << endl;
    tanker.DisplayStats();
    tanker.DisplayDefence();

    cout << "----------- Attacker Details ------------- " << endl;
    Attacker attacker;
    attacker.SetName("Soldier 76");
    attacker.SetHealth(325);
    attacker.SetAttack(30);
    // cout << " Name : " << attacker.GetName() << endl;
    // cout << " Health : " << attacker.GetHealth() << endl;
    // cout << " Attack : " << attacker.GetAttack() << endl;
    attacker.DisplayStats();

    cout << "----------- Healer Details ------------- " << endl;
    Healer healer;
    healer.SetName("Kiriko");
    healer.SetHealth(225);
    healer.SetAttack(100);
    healer.SetHeal(25);
    // cout << " Name : " << healer.GetName() << endl;
    // cout << " Health : " << healer.GetHealth() << endl;
    // cout << " Attack : " << healer.GetAttack() << endl;
    // cout << " Heal : " << healer.GetHeal() << endl;
    healer.DisplayStats();
    healer.DisplayHeal();
}