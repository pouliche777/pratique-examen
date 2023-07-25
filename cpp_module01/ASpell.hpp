#pragma once
#include "ATarget.hpp"
#include <iostream>
class ATarget;
 class ASpell{

    protected:
        std::string name;
        std::string effects;
        
    public :
        ASpell();
        ASpell (std::string const  &name, std::string const  &effects);
        ASpell(ASpell const & other);
        ASpell &operator=(ASpell const &other);
        std::string const &getName() const;
        std::string const &getEffects() const; 
        virtual ~ASpell();
        virtual ASpell *clone () const = 0;
        void launchSpell( ATarget const & target);
 };