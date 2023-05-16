#include "sources/Team.hpp"
#include "doctest.h"
#include <iostream>
#include <sstream>
#include <stdexcept>

using namespace std;
using namespace ariel;

//-------------------------- Point Tests --------------------------//
TEST_CASE("Point constructors"){
    CHECK_NOTHROW(Point());
    CHECK_NOTHROW(Point(4,8.567));
    CHECK_NOTHROW(Point(-4.234566778,-0.000000000001));
}

TEST_CASE("Point getters & setters"){
    Point point1(0,0);
    Point point2(2.3,-5.001);
    Point point3(-2,9.004568);

    CHECK(point1.getX() == 0);
    CHECK_FALSE(point1.getY() == point3.getY());
    CHECK_NOTHROW(point2.setX(-5.6));
    CHECK(point2.getX() == -5.6);
    point3.setY(9);
    CHECK(point3.getY() == 9);
}

TEST_CASE("Point methods"){
    SUBCASE("moveTowards"){
        Point point1(7,4);
        Point point2(1.4,5.3);
        Point point3(-2,-4.5);
        double dist = point1.distance(point2);
        double half_dist = dist/2;
        double qr_dist = dist/4;
        
        CHECK_NOTHROW(point1.moveTowards(point1, point2, half_dist));
        // Point point4 = point1.moveTowards(point1, point2, half_dist);
        
        // negative distance
        CHECK_THROWS(point1.moveTowards(point1, point2, -half_dist));
    }

    SUBCASE("distance"){
        Point point1(0,0);
        Point point2(2.3,-5.001);
        Point point3(-2,9.004568);
        CHECK(point1.distance(point1) == 0);
        CHECK(point1.distance(point2) > 0);
        CHECK(point1.distance(point2) == point2.distance(point1));
        CHECK(point1.distance(point2) != point2.distance(point3));
        CHECK(point1.distance(point2) == 5.50454);
        CHECK(point3.distance(point1) == 9.224);
        CHECK(point2.distance(point3) == 14.6508);
    }

    SUBCASE("print"){
        Point point1(-694234560,0.0000000000001);       
        CHECK_NOTHROW(Point().print());
        CHECK_NOTHROW(point1.print());
    }
}

//-------------------------- Character Tests --------------------------//
TEST_CASE("Character and it's inheritances constructors"){
    SUBCASE("Character"){
        CHECK_NOTHROW(Character());
        CHECK_NOTHROW(Character("Alice", Point()));
        CHECK_NOTHROW(Character("Bob", Point(8,3)));
    }
    
    SUBCASE("Cowboy"){
        CHECK_NOTHROW(Cowboy("Bob", Point(9.2,4.6)));
        CHECK_NOTHROW(Cowboy("", Point(-0.0,-0.6)));
    }

    SUBCASE("Ninja"){
        CHECK_NOTHROW(Ninja("Yushima", Point(1.22,-5.42)));
    }

    SUBCASE("YoungNinja"){
        CHECK_NOTHROW(YoungNinja("Yushima", Point(1.22,-5.42)));
    }

    SUBCASE("TrainedNinja"){
        CHECK_NOTHROW(TrainedNinja("Yushima", Point(1.22,-5.42)));
    }

    SUBCASE("OldNinja"){
        CHECK_NOTHROW(OldNinja("Yushima", Point(1.22,-5.42)));
    }
}

TEST_CASE("Chacracter getters & setters"){
    Character Alice("Alice", Point());
    Character Bob("Bob", Point(2.6,-6.33));
    SUBCASE("Character"){
        CHECK(Alice.getLocation().getX() != Bob.getLocation().getX());
        CHECK(Alice.getLocation().getY() != Bob.getLocation().getY());
        
    }

    SUBCASE("Cowboy"){

    }

    SUBCASE("Ninja"){

    }
}

//-------------------------- Team Tests --------------------------//
TEST_CASE("Team and it's inheritances constructors"){

}