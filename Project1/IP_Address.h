#pragma once
#include <msclr/marshal_cppstd.h>
#include <string>
#include <vector>
#include <sstream>
#include <regex>

// IP_Address class to represent IP information along with ports, protocol, and data
class IP_Address {
protected:
    std::string src_ip, dst_ip;
    std::string src_port, dst_port;
    std::string protocol;
    std::string data;
public:
	const std::string& getSrc() const;
	void setSrc(const std::string&);

	const std::string& getDst() const;
	void setDst(const std::string&);

	const std::string& getSrcPort() const;
	void setSrcPort(const std::string&);

	const std::string& getDstPort() const;
	void setDstPort(const std::string&);

	const std::string& getProtocol() const;
	void setProtocol(const std::string&);

	const std::string& getData() const;
	void setData(const std::string&);

};