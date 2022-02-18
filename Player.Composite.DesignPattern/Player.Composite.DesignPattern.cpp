#include <iostream>
#include <string>
#include <array>
#include <numeric>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;
using std::array;

class Player
{
    enum Abilities {
        Strength,
        Agility,
        Intelligence,
        LongDistanceKick,
        WeakFoot,
        count //it stores the abilities
    };

    array<int, count> abilities;
#pragma region Abilities
public:
    int getStrength() const
    {
        return abilities[Strength];
    };

    void setStrength(int value)
    {
        abilities[Strength] = value;
    };

    int getAgility() const
    {
        return abilities[Agility];
    };

    void setAgility(int value)
    {
        abilities[Agility] = value;
    };

    int getIntelligence() const
    {
        return abilities[Intelligence];
    };

    void setIntelligence(int value)
    {
        abilities[Intelligence] = value;
    };

    int getLongDistanceKick() const
    {
        return abilities[LongDistanceKick];
    };

    void setLongDistanceKick(int value)
    {
        abilities[LongDistanceKick] = value;
    };

    int getWeakFoot() const
    {
        return abilities[WeakFoot];
    };

    void setWeakFoot(int value)
    {
        abilities[WeakFoot] = value;
    };
#pragma endregion
#pragma region Stats



    int sum() const
    {
        return accumulate(abilities.begin(), abilities.end(), 0);
    }

    double average() const
    {
        return sum() / (double)count;
    }

    int max() const
    {
        return *max_element(abilities.begin(), abilities.end());
    }

};
#pragma endregion

void PlayerOne()
{
    Player p;
    p.setStrength(3);
    p.setAgility(3);
    p.setIntelligence(9);
    p.setLongDistanceKick(8);
    p.setWeakFoot(9);

    cout << "Player one has an average stat of " << p.average()
        << " and a maximum stat of " << p.max() << "\n\n";

};

void PlayerTwo()
{
    Player p;
    p.setStrength(7);
    p.setAgility(8);
    p.setIntelligence(8);
    p.setLongDistanceKick(6);
    p.setWeakFoot(3);

    cout << "Player two has an average stat of " << p.average()
        << " and a maximum stat of " << p.max() << "\n\n";

};

int main()
{
    PlayerOne();
    PlayerTwo();

    return 0;
}