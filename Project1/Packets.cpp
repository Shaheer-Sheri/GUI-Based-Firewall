#include"Packets.h"

const int Packet::getPacketNo() const
{
	return packet_no;
}

void Packet::setPacketNo(const int packet_no)
{
	this->packet_no = packet_no;
}
