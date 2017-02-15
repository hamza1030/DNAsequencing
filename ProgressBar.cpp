#include "ProgressBar.h"
 
ProgressBar::ProgressBar(std::ostream &os, int const& length):
    m_length(length), m_mark(0), m_progress(0),
    m_os(os)
{}
 
void ProgressBar::init()
{
    m_os << "[";
    for (int i=0; i<m_length; ++i)
        m_os << " ";
    m_os << "]";
    for (int i=0; i<=m_length; ++i)
        m_os << "\b";
    m_os.flush();
}