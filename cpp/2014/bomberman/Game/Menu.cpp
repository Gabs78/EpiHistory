#include "Menu.hh"
#include "MenuCamera.hh"
#include "Input.hpp"
#include "Vector3f.hh"
#include "GameClock.hpp"
#include "Input.hpp"


Menu::Menu()
{
//   this->camera_.initialize();
}

void Menu::initialize(void)
{
  window_.create();
  this->camera_.initialize();

  std::list<AObject*>::iterator itb = this->objects_.begin();

  for (; itb != this->objects_.end(); ++itb)
    (*itb)->initialize();
}
void Menu::update(void)
{
  if (this->lbl_->MenuDecide == true) {
    this->window_.close();
  }
  std::list<AObject*>::iterator itb = this->objects_.begin();

  for (; itb != this->objects_.end(); ++itb)
    {
      (*itb)->update(gameClock_, input_);
    }
  camera_.update(gameClock_, input_);
}
void Menu::draw(void)
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glClearColor(0.74f, 0.84f, 95.0f, 1.0f);
  glClearDepth(1.0f);
  std::list<AObject*>::iterator itb = this->objects_.begin();

  for (; itb != this->objects_.end(); ++itb)
    (*itb)->draw();

  this->window_.display();
}
void Menu::unload(void)
{
    ////////////////////////////////////////////////////////////////////////////////
    /// Liberation memoire
    ////////////////////////////////////////////////////////////////////////////////
}

void Menu::add_object(AObject *obj)
{
  this->objects_.push_front(obj);
}