# CONSOLE-GAME
It's my Console Game on C++. There is Characters and Monsters. You have the change Character, that to win your enemies(randomize)! ENJOY!
___
## CODE FOR HEROES
```c++
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
```
___
## CODE FOR ENEMIES
```c++
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
```
