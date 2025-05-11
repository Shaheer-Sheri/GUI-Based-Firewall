#pragma once
#include"IP_Address.h"

class Packet : public IP_Address {
private:
	int packet_no;
    std::string timestamp;

public:
	const int getPacketNo() const;
	void setPacketNo(const int);

	const std::string& getTime() const
	{
		return timestamp;
	}

	void setTime(const std::string& setter)
	{
		timestamp = setter;
	}
};

