#include "AMap.h"

#include "GL/freeglut.h"

AMap::AMap()
{
	m_raw[9] = "0000000000";
	m_raw[8] = "0000000000";
	m_raw[7] = "0000000000";
	m_raw[6] = "0000000000";
	m_raw[5] = "0000000000";
	m_raw[4] = "0000000000";
	m_raw[3] = "0000000010";
	m_raw[2] = "1000000110";
	m_raw[1] = "1111111111";
	m_raw[0] = "1111111111";

}


AMap::~AMap()
{
}
