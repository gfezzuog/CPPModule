#include "ICharacter.hpp"

ICharacter::ICharacter()
{}

ICharacter::ICharacter(const ICharacter &icharacter)
{
    *this = icharacter;
}

ICharacter::~ICharacter()
{}
