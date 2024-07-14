#include <string>

//Structure Definitions
class Monster{
    private:
        std::string name;
        std::string type;
        std::string color;
        int eyes;
        int arms;
        int legs;

        int genRandom(int start, int end);
        std::string genName();
        std::string genType();
        std::string genColor();
    public:
        Monster();
        Monster(std::string, std::string, std::string, int, int, int);

        std::string toString();

        //setters
        void setName(std::string);
        void setType(std::string);
        void setColor(std::string);
        void setEyes(int);
        void setArms(int);
        void setLegs(int);
        
        //getters
        std::string getName();
        std::string getType();
        std::string getColor();
        int getEyes();
        int getArms();
        int getLegs();
};


