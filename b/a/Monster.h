#include <string>

class Monster {
    private:
        // Attributes
        std::string name;
        std::string type;
        std::string color;
        int eyes;
        int arms;
        int legs;

    public:
        // Setters
        void setName(std::string newName);
        void setType(std::string newType);
        void setColor(std::string newColor);
        void setEyes(int newEyes);
        void setArms(int newArms);
        void setLegs(int newLegs);

        // Getters
        std::string getName() const;
        std::string getType() const;
        std::string getColor() const;
        int getEyes() const;
        int getArms() const;
        int getLegs() const;
};
