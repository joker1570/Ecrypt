#include "RespondFactory.h"

RespondFactory::RespondFactory()
{
	m_flag = false;
		m_respond =NULL;
}

RespondFactory::RespondFactory(RespondMsg * msg)
{
	m_flag = true;
	m_respond = msg;
}

RespondFactory::~RespondFactory()
{
}

Codec * RespondFactory::createCodec()
{
	if (m_flag)
	{
		return new RespondCodec(m_respond);
	}
	else
	{
		return new RespondCodec;
	}
}
