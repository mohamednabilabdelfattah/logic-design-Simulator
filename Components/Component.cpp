#include "Component.h"

Component::Component(const GraphicsInfo &r_GfxInfo)
{
	m_GfxInfo = r_GfxInfo;	
}

void Component::save()
{
}

GraphicsInfo Component::GetLocation()
{
	return m_GfxInfo;
}
void Component::set_Location(GraphicsInfo the_new)
{
	m_GfxInfo.x1 = the_new.x1;
	m_GfxInfo.x2 = the_new.x2;
	m_GfxInfo.y1 = the_new.y1;
	m_GfxInfo.y2 = the_new.y2;
}

string Component::get_mlabel()
{
	return m_Label;
}
bool Component::IsInsideMe(int x, int y)
{
	if (m_GfxInfo.x1 < x && m_GfxInfo.x2 > x && m_GfxInfo.y1 < y && m_GfxInfo.y2 > y)
	{
		return true;
	}
	return false;
}
Component::Component()
{}

void Component::Draw(Output* pOut, bool selected)
{}

Component::~Component()
{}

