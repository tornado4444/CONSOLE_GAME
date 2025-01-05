/*
 ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄        ▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄            ▄▄▄▄▄▄▄▄▄▄▄       ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄       ▄▄  ▄▄▄▄▄▄▄▄▄▄▄
▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░▌      ▐░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░▌          ▐░░░░░░░░░░░▌     ▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░▌     ▐░░▌▐░░░░░░░░░░░▌
▐░█▀▀▀▀▀▀▀▀▀ ▐░█▀▀▀▀▀▀▀█░▌▐░▌░▌     ▐░▌▐░█▀▀▀▀▀▀▀▀▀ ▐░█▀▀▀▀▀▀▀█░▌▐░▌          ▐░█▀▀▀▀▀▀▀▀▀      ▐░█▀▀▀▀▀▀▀▀▀ ▐░█▀▀▀▀▀▀▀█░▌▐░▌░▌   ▐░▐░▌▐░█▀▀▀▀▀▀▀▀▀
▐░▌          ▐░▌       ▐░▌▐░▌▐░▌    ▐░▌▐░▌          ▐░▌       ▐░▌▐░▌          ▐░▌               ▐░▌          ▐░▌       ▐░▌▐░▌▐░▌ ▐░▌▐░▌▐░▌
▐░▌          ▐░▌       ▐░▌▐░▌ ▐░▌   ▐░▌▐░█▄▄▄▄▄▄▄▄▄ ▐░▌       ▐░▌▐░▌          ▐░█▄▄▄▄▄▄▄▄▄      ▐░▌ ▄▄▄▄▄▄▄▄ ▐░█▄▄▄▄▄▄▄█░▌▐░▌ ▐░▐░▌ ▐░▌▐░█▄▄▄▄▄▄▄▄▄
▐░▌          ▐░▌       ▐░▌▐░▌  ▐░▌  ▐░▌▐░░░░░░░░░░░▌▐░▌       ▐░▌▐░▌          ▐░░░░░░░░░░░▌     ▐░▌▐░░░░░░░░▌▐░░░░░░░░░░░▌▐░▌  ▐░▌  ▐░▌▐░░░░░░░░░░░▌
▐░▌          ▐░▌       ▐░▌▐░▌   ▐░▌ ▐░▌ ▀▀▀▀▀▀▀▀▀█░▌▐░▌       ▐░▌▐░▌          ▐░█▀▀▀▀▀▀▀▀▀      ▐░▌ ▀▀▀▀▀▀█░▌▐░█▀▀▀▀▀▀▀█░▌▐░▌   ▀   ▐░▌▐░█▀▀▀▀▀▀▀▀▀
▐░▌          ▐░▌       ▐░▌▐░▌    ▐░▌▐░▌          ▐░▌▐░▌       ▐░▌▐░▌          ▐░▌               ▐░▌       ▐░▌▐░▌       ▐░▌▐░▌       ▐░▌▐░▌
▐░█▄▄▄▄▄▄▄▄▄ ▐░█▄▄▄▄▄▄▄█░▌▐░▌     ▐░▐░▌ ▄▄▄▄▄▄▄▄▄█░▌▐░█▄▄▄▄▄▄▄█░▌▐░█▄▄▄▄▄▄▄▄▄ ▐░█▄▄▄▄▄▄▄▄▄      ▐░█▄▄▄▄▄▄▄█░▌▐░▌       ▐░▌▐░▌       ▐░▌▐░█▄▄▄▄▄▄▄▄▄
▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░▌      ▐░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌     ▐░░░░░░░░░░░▌▐░▌       ▐░▌▐░▌       ▐░▌▐░░░░░░░░░░░▌
 ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀▀  ▀        ▀▀  ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀▀       ▀▀▀▀▀▀▀▀▀▀▀  ▀         ▀  ▀         ▀  ▀▀▀▀▀▀▀▀▀▀▀

*/


#include <iostream>
#include <string>
#include <chrono>
#include <iomanip>
#include <vector>
#include <ctime>
#include <random>

// Generate a random number between min and max (inclusive)
int getRandomNumber(int max, int min) {
    static std::random_device random_device; // Entropy generator
    static std::mt19937 generator(random_device()); // Mersenne Twister random number generator

    static const double fraction = 1.0 / (static_cast<double>(generator.max()) + 1.0);
    return static_cast<int>(generator() * fraction * (max - min + 1) + min);
}

// Timer class for measuring elapsed time
class Timer {
private:
    using clock_t = std::chrono::high_resolution_clock;
    using second_t = std::chrono::duration<double, std::ratio<1>>;
    std::chrono::time_point<clock_t> m_beg;

public:
    Timer() : m_beg(clock_t::now()) {}

    void reset() {
        m_beg = clock_t::now();
    }

    double elapsed() const {
        return std::chrono::duration_cast<second_t>(clock_t::now() - m_beg).count();
    }
};

// Base character class for both heroes and monsters
class Character {
protected:
    std::string cr_name;    // Character name
    int cr_level;           // Character level
    int cr_health;          // Character health
    int cr_damage;          // Character damage

public:
    Character() = default;  // Default constructor

    // Parameterized constructor
    Character(std::string name, int level, int health, int damage) :
        cr_name(name), cr_level(level), cr_health(health), cr_damage(damage) {}

    // Copy constructor
    Character(const Character& other)
        : cr_name(other.cr_name), cr_level(other.cr_level),
        cr_health(other.cr_health), cr_damage(other.cr_damage) {}

    const std::string& getName() { return cr_name; }

    // Reduce health when taking damage
    void reduceHealth(int health) {
        cr_health -= health;
    }

    bool isDead() { return cr_health <= 0; }

    // Virtual setters and getters
    virtual void setCount(int cr_health) { this->cr_health = cr_health; }
    virtual void setDamage(int cr_damage) { this->cr_damage = cr_damage; }
    virtual int getHealth() { return cr_health; }
    virtual int getDamage() { return cr_damage; }
};

// Fighter class - extends Character with weapon functionality
class Fighter : public Character {
protected:
    int type_weapon;    // Weapon type identifier
public:
    Fighter() : Character(), type_weapon(0) {}

    Fighter(std::string name, int level, int health, int damage, int weapon_type)
        : Character(name, level, health, damage), type_weapon(weapon_type) {}

    void setWeapon(int weapon_type) { type_weapon = weapon_type; }
    int getWeapon() const { return type_weapon; }

    void showParentMethod() {
        std::cout << "Name from Character: " << Character::getName() << '\n';
        std::cout << "Health from Character: " << Character::getHealth() << '\n';
    }
};

// Heroes class - specific hero types and their abilities
class Heroes : public Fighter {
protected:
    int type_weapon;
    int p_level;    // Hero's current level

public:
    // Hero types enumeration
    enum Hero {
        Swordman,
        Bowman,
        Crossbowman,
        Prisoner,
        Murder,
        Cowboy,
        Samurai,
        MAX_TYPES
    };

    Heroes() : Fighter(), p_level(1) {}

    Heroes(std::string name, int level, int health, int damage, int weapon_type)
        : Fighter(name, level, health, damage, weapon_type), p_level(level) {}

    // Level up the hero
    void levelUp() {
        ++p_level;
        ++cr_damage;
    }

    int getLevel() { return p_level; }
    bool hasWon() { return p_level >= 20; }  // Win condition: reach level 20

    Heroes(Hero hero, int health, int level, int damage);
    void typeWeapon();    // Weapon selection menu

    void displayHeroInfo() {
        std::cout << "=== Hero Information ===\n";
        std::cout << "Name: " << cr_name << '\n';
        std::cout << "Level: " << p_level << '\n';
        std::cout << "Health: " << cr_health << '\n';
        std::cout << "Damage: " << cr_damage << '\n';
        std::cout << "=====================\n";
    }
};

// Implementation of Heroes constructor with hero type
Heroes::Heroes(Hero hero, int health, int level, int damage) {
    std::cout << "Health: " << health << '\n'
        << "Level: " << level << '\n'
        << "Damage: " << damage << '\n';

    switch (hero) {
    case Swordman: std::cout << "You are a Swordman."; break;
    case Bowman: std::cout << "You are a Bowman."; break;
    case Crossbowman: std::cout << "You are a Crossbowman."; break;
    case Prisoner: std::cout << "You are a Prisoner."; break;
    case Murder: std::cout << "You are a Murderer."; break;
    case Cowboy: std::cout << "You are a Cowboy."; break;
    case Samurai: std::cout << "You are a Samurai."; break;
    }
}

// Weapon selection implementation
void Heroes::typeWeapon() {
    std::cout << "\nChoose your weapon type:\n"
        << "1) Sword\n"
        << "2) Bow\n"
        << "3) Crossbow\n"
        << "4) Bat\n"
        << "5) Dagger\n"
        << "6) Gun\n"
        << "7) Katana\n"
        << "Your choice: ";

    std::cin >> type_weapon;

    switch (type_weapon) {
    case 1:
        *this = Heroes("Swordman", 1, 12, 8, type_weapon);
        std::cout << "You chose the sword!\n";
        break;
    case 2:
        *this = Heroes("Bowman", 1, 10, 6, type_weapon);
        std::cout << "You chose the bow!\n";
        break;
    case 3:
        *this = Heroes("Crossbowman", 1, 11, 7, type_weapon);
        std::cout << "You chose the crossbow!\n";
        break;
    case 4:
        *this = Heroes("Prisoner", 1, 6, 3, type_weapon);
        std::cout << "You chose the bat!\n";
        break;
    case 5:
        *this = Heroes("Murderer", 1, 7, 2, type_weapon);
        std::cout << "You chose the dagger!\n";
        break;
    case 6:
        *this = Heroes("Cowboy", 1, 8, 4, type_weapon);
        std::cout << "You chose the gun!\n";
        break;
    case 7:
        *this = Heroes("Samurai", 1, 14, 10, type_weapon);
        std::cout << "You chose the katana!\n";
        break;
    default:
        std::cout << "Invalid choice. Try again.\n";
        typeWeapon();
        return;
    }
}

// Monster class definition with different monster types
class Monster : public Character {
public:
    enum Type {
        Dragon,
        Orc,
        Demon,
        Slime,
        Zombie,
        Jason,
        Scream,
        Wolf,
        MAX_TYPES
    };

    struct MonsterData {
        std::string name;
        int level;
        int health;
        int damage;
    };

    static MonsterData monsterData[];

    Monster(Type type) : Character(
        monsterData[type].name,
        monsterData[type].level,
        monsterData[type].health,
        monsterData[type].damage) {}

    static Type getRandomMonster() {
        return static_cast<Type>(getRandomNumber(0, MAX_TYPES - 1));
    }
};

// monster data initialization
Monster::MonsterData Monster::monsterData[Monster::MAX_TYPES]{
    {"Dragon", 3, 10, 3},
    {"Orc", 1, 2, 1},
    {"Demon", 12, 54, 45},
    {"Slime", 1, 1, 1},
    {"Zombie", 2, 5, 3},
    {"Jason", 5, 14, 6},
    {"Scream", 4, 12, 4},
    {"Wolf", 4, 10, 4}
};

// Function prototypes
void fightMonster(Heroes&);
void characterDecision(Monster&, Heroes&);
void attackHero(Monster&, Heroes&);
void attackMonster(Monster&, Heroes&);
char decision();
void heroWon(Heroes&);
void interface(Monster&, Heroes&);

// Game interface display
void interface(Monster& m, Heroes& hero) {
    system("cls");
    std::cout << "Hero Name: " << hero.getName() << std::setw(14)
        << "Health: " << hero.getHealth() << std::setw(14)
        << "Level: " << hero.getLevel() << std::setw(14)
        << "Damage: " << hero.getDamage() << '\n';
    std::cout << "Monster: " << m.getName() << std::setw(14)
        << "Health: " << m.getHealth() << std::setw(14)
        << "Damage: " << m.getDamage() << "\n\n\n" << '\n';
}

// Main game loop functions
void fightMonster(Heroes& hero) {
    Monster m(Monster::getRandomMonster());
    interface(m, hero);
    characterDecision(m, hero);
}

void characterDecision(Monster& m, Heroes& hero) {
    char dec = decision();
    if (dec == 'R' || dec == 'r') {
        if (getRandomNumber(0, 1) == 1) {
            interface(m, hero);
            std::cout << "You successfully fled.\n";
            system("pause");
            fightMonster(hero);
        }
        else {
            interface(m, hero);
            std::cout << "You cannot escape.";
            system("pause");
            attackHero(m, hero);
        }
    }
    else {
        attackMonster(m, hero);
    }
}

void attackHero(Monster& m, Heroes& hero) {
    hero.reduceHealth(m.getDamage());
    interface(m, hero);
    if (hero.isDead()) {
        system("cls");
        std::cout << "You lost!\n";
        std::cout << "Your level: " << hero.getLevel() << '\n';
    }
    else {
        characterDecision(m, hero);
    }
}

void attackMonster(Monster& m, Heroes& hero) {
    m.reduceHealth(hero.getDamage());
    interface(m, hero);
    if (m.getHealth() <= 0) {
        hero.levelUp();
        interface(m, hero);
        std::cout << "You won!\n";
        system("pause");
        heroWon(hero);
    }
    else {
        attackHero(m, hero);
    }
}

// Get player decision (Run or Fight)
char decision() {
    while (true) {
        std::cout << "Run(R) / Fight(F): ";
        char decision;
        std::cin >> decision;
        std::cin.ignore(32767, '\n');

        if (decision != 'R' && decision != 'F' && decision != 'r' && decision != 'f') {
            std::cout << "Invalid input. Try again.\n";
        }
        else {
            return decision;
        }
    }
}

void heroWon(Heroes& hero) {
    if (hero.hasWon()) {
        system("cls");
        std::cout << "Dungeon completed. Congratulations!\n";
    }
    else {
        fightMonster(hero);
    }
}

int main() {
    system("color 04");  // Set console color

    // JUST DEFAULT
    /*Character defaultCharacter;
    std::cout << "=== DEFAULT CHARACTER ===\n";
    std::cout << "Name: " << defaultCharacter.getName() << '\n';
    std::cout << "Level: 1\n";
    std::cout << "Health: " << defaultCharacter.getHealth() << '\n';
    std::cout << "Damage: " << defaultCharacter.getDamage() << '\n';
    std::cout << "=======================\n\n";*/

    // Create and initialize game hero
    Heroes hero;
    hero.typeWeapon();
    hero.displayHeroInfo();

    // Start game timer
    Timer t;
    std::cout << "Elapsed time: " << t.elapsed() << '\n';
    system("pause");

    // Start the game
    fightMonster(hero);

    return 0;
}