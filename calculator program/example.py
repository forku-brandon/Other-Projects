from kivy.app import App
import kivy
from kivy.uix.gridlayout import GridLayout
from kivy.uix.widget import Widget
from kivy.properties import ObjectProperty
from  kivy.lang import Builder
# from kivy.core.window import Window
from kivy.uix.image import Image
# 

class MyLayout(GridLayout):
    pass
class TainApp(App):

    def build(self):
      return MyLayout()
if __name__=='__main__':
  TainApp().run()