#pragma once
#include <string>
#include "CPF.hpp"
#include "Pessoa.hpp"
#include "Autenticavel.hpp"

class Titular : public Pessoa<CPF>, Autenticavel
{
public:
    Titular(CPF cpf, std::string nome, std::string senha);
};