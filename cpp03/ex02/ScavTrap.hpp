# include "ClapTrap.hpp"

/*       /\   The private members in the base class cannot be directly accessed in
        /  \     the derived class, while protected and public members can be directly accessed. 
       / !! \     To access or update the private members of the base class in derived class, we have
      /______\      to use the corresponding getter and setter functions of the base class or declare 
                      the derived class as friend class.
*/


// This is the derived class
class ScavTrap: public ClapTrap{
    public:
        void guardGate();
        ScavTrap();
        ScavTrap(ScavTrap& other);
        ScavTrap(std::string& UpdatedName);
        ScavTrap& operator=(ScavTrap& other);
        ~ScavTrap();
};