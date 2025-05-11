#include"Rules.h"

const std::string& Rules::getAction() const
{
	return action;
}
void Rules::setAction(const std::string& action)
{
	this->action = action;
}

const int Rules::getRuleNo() const
{
	return rule_no;
}
void Rules::setRuleNo(const int rule_no)
{
	this->rule_no = rule_no;
}

std::string Rules::getRuleAsString() const
{
	// Construct a string representing the rule
	std::string ruleString = "Rule Number: " + std::to_string(rule_no) + "\r\n";
	ruleString += "Source: " + src_ip + "\r\n";
	ruleString += "Destination: " + dst_ip + "\r\n";
	ruleString += "Source Port: " + src_port + "\r\n";
	ruleString += "Destination Port: " + dst_port + "\r\n";
	ruleString += "Protocol: " + protocol + "\r\n";
	ruleString += "Action: " + action + "\r\n";
	ruleString += "Data: " + data + "\r\n";
	return ruleString;
}