#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <string>

class Restaurant {
    private:
        // Attributes
        std::string name;
        std::string type;
        float score;
    public:
        // Constructor
        Restaurant() {
            name = "";
            type = "";
            score = 0.0;
        }
        
        // Setters
        void setName(std::string& name);
        void setType(std::string& type);
        void setScore(float& score);

        std::string toCSV();
};

#endif
