#pragma once
#include "CodecFactory.h"
#include "RequestCodec.h"

class RequestFactory :
	public CodecFactory
{
public:
	RequestFactory();
	RequestFactory(RequestMsg* msg);
	~RequestFactory();

	Codec* createCodec();

private:
	bool m_flag ;
	RequestMsg * m_request;
};

