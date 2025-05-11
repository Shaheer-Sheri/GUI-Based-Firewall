#include"IP_Address.h"

const std::string& IP_Address::getSrc() const
{
	return src_ip;
}
void IP_Address::setSrc(const std::string& src_ip)
{
	this->src_ip = src_ip;
}


const std::string& IP_Address::getDst() const
{
	return dst_ip;
}
void IP_Address::setDst(const std::string& dst_ip)
{
	this->dst_ip = dst_ip;
}


const std::string& IP_Address::getSrcPort() const
{
	return src_port;
}
void IP_Address::setSrcPort(const std::string& src_port)
{
	this->src_port = src_port;
}


const std::string& IP_Address::getDstPort() const
{
	return dst_port;
}
void IP_Address::setDstPort(const std::string& dst_port)
{
	this->dst_port = dst_port;
}


const std::string& IP_Address::getProtocol() const
{
	return protocol;
}
void IP_Address::setProtocol(const std::string& protocol)
{
	this->protocol = protocol;
}

const std::string& IP_Address::getData() const
{
	return data;
}

void IP_Address::setData(const std::string& data)
{
	this->data = data;
}