#pragma once
#include"IP_Address.h"

class Rules : public IP_Address {
private:
    int rule_no;
    std::string action;

public:
	const std::string& getAction() const;
	void setAction(const std::string& setter);

	const int getRuleNo() const;
	void setRuleNo(const int );

	std::string getRuleAsString() const;
};