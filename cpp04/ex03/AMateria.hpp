#ifndef _AMATERIA_
#define _AMATERIA_

#include <iostream>

class ICharacter{
    public:
        // Canonical form:
        ICharacter();
        ICharacter(const ICharacter& other);
        ICharacter& operator=(const ICharacter& other);
        // i don't know what should i do in 
        // copy assignement operator && destructor
        virtual ~ICharacter();

        // Other member functions:
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};

class Character: public ICharacter{
    protected:
        std::string _name;
        AMateria*   _inventory[4];
    public:
    /* Canonical form :*/
        Character();
        Character(const Character& other);
        Character& operator=(const Character& other);
        // ~Character();


        /*other member functions: */
        std::string const& getName() const;
        void equip(AMateria* m); 
        // Add to the first empty slot.
        void unequip(int idx); 
        // Remove Materia at idx (but don’t delete it!).
        void use(int idx, ICharacter& target); 
        // Use the Materia at idx on target.
};

class IMateriaSource{
    public:
        virtual AMateria* learnMateria(AMateria* m) = 0; 
        //Clone m and store it in the first empty slot.
        virtual AMateria* createMateria(std::string type) = 0;
        // Clone the template matching type and return it.
};


class AMateria{
    protected:
        std::string type;
    public:
        /*Canonical form:*/
        AMateria();
        // AMateria(cosnt AMateria& other);
        // AMateria& operator=(cosnt AMateria& other);
        // ~AMateria();
        AMateria(const std::string& Type);

        std::string const & getType() const; // Returns the materia type

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};



class Ice: public AMateria{
    protected:
        

};

class Cure: public AMateria{
    protected:
    public:
    // canonical form:
        Cure();
        // Cure(const Cure& other);
        // Cure& operator=(cosnt Cure& other);
        // ~Cure();

        // vertual functions definition:
        AMateria* clone() const;
        void use(ICharacter& target);

};

#endif