
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_JInternalFrame$JDesktopIcon__
#define __javax_swing_JInternalFrame$JDesktopIcon__

#pragma interface

#include <javax/swing/JComponent.h>
extern "Java"
{
  namespace javax
  {
    namespace accessibility
    {
        class AccessibleContext;
    }
    namespace swing
    {
        class JDesktopPane;
        class JInternalFrame;
        class JInternalFrame$JDesktopIcon;
      namespace plaf
      {
          class DesktopIconUI;
      }
    }
  }
}

class javax::swing::JInternalFrame$JDesktopIcon : public ::javax::swing::JComponent
{

public:
  JInternalFrame$JDesktopIcon(::javax::swing::JInternalFrame *);
  virtual ::javax::accessibility::AccessibleContext * getAccessibleContext();
  virtual ::javax::swing::JDesktopPane * getDesktopPane();
  virtual ::javax::swing::JInternalFrame * getInternalFrame();
  virtual ::javax::swing::plaf::DesktopIconUI * getUI();
  virtual ::java::lang::String * getUIClassID();
  virtual void setInternalFrame(::javax::swing::JInternalFrame *);
  virtual void setUI(::javax::swing::plaf::DesktopIconUI *);
  virtual void updateUI();
private:
  static const jlong serialVersionUID = 4672973344731387687LL;
public: // actually package-private
  ::javax::swing::JInternalFrame * __attribute__((aligned(__alignof__( ::javax::swing::JComponent)))) frame;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_JInternalFrame$JDesktopIcon__
