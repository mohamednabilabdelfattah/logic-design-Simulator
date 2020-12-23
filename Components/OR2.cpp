#include"OR2.h"

/*class OR2
represent the 2 input OR2 gate
*/
/// ////////////////Constructor///////////////////////////

OR2::OR2(const GraphicsInfo& r_GfxInfo, int r_FanOut) :Gate(2, r_FanOut)
{
	m_GfxInfo.x1 = r_GfxInfo.x1;
	m_GfxInfo.y1 = r_GfxInfo.y1;
	m_GfxInfo.x2 = r_GfxInfo.x2;
	m_GfxInfo.y2 = r_GfxInfo.y2;
}
/// //////////////Operate////////////////////////////
void OR2::Operate()
{
	m_OutputPin = GetInputPinStatus(0) || GetInputPinStatus(1);
}
/////////////////Draw Function////////////////////////
void OR2::Draw(Output* pOut)
{
	pOut->DrawNAND2(m_GfxInfo);
}
/////////////////GEToutpinstatus////////////////////////
int OR2::GetOutPinStatus()
{
	return m_OutputPin.getStatus();
}
/////////////////GETinputStatus/////////////////////
int OR2::GetInputPinStatus(int n)
{
	return m_InputPins[n - 1].getStatus();
}
///////////////setinputpinstatus////////////////////
void OR2::setInputPinStatus(int n, STATUS s)
{
	m_InputPins[n - 1].setStatus(s);
}
