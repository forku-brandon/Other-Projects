from kivy.app import App
import kivy
from kivy.uix.gridlayout import GridLayout
from kivy.uix.widget import Widget
from kivy.properties import ObjectProperty
from  kivy.lang import Builder
# from kivy.core.window import Window
from kivy.uix.image import Image
Builder.load_file('box.kv')
class MyLayout(GridLayout):
   def press(self, x):
        value = self.ids.update_label.text 
        if value =='0' or value == 'error':
            self.ids.update_label.text = ''
            self.ids.update_label.text = f'{x}'
        else:
             self.ids.update_label.text = f'{value}{x}'
        
   def math_sign(self, sign):
          
           value = self.ids.update_label.text 
           self.ids.update_label.text = f'{value}{sign}'
   def dot(self):
           value= self.ids.update_label.text 
           num_list = value.split('+')

           if '+'  in value and '.' not in num_list[-1]:
                 value = f'{value}.'
                 self.ids.update_label.text = value
           elif '.' in value:
               pass
           else:
               value = f'{value}.'
               self.ids.update_label.text = value
          


   def equal(self):
           value = self.ids.update_label.text
           try: 
             answer = eval(value)
             self.ids.update_label.text =  str(answer)
           except:
                self.ids.update_label.text =  'error'
      #      if '+' in value:
      #            num_list = value.split('+')
      #            answer = 0
      #            for number in num_list:
      #                  answer = answer + float(number)
      #            self.ids.update_label.text =  str(answer)
      #      elif '-' in value:
      #            num_list = value.split('-')
      #            answer = 0
      #            for number in num_list:
      #                  answer = float(number) - answer 
      #            self.ids.update_label.text =str(-answer)
      #      elif 'x' in value:
      #            num_list = value.split('x')
      #            answer = 1
      #            for number in num_list:
      #                  answer = answer * float(number)
      #            self.ids.update_label.text =str(answer)
      #      elif '/' in value:
      #            num_list = value.split('/')
      #            answer = 1
      #            for number in num_list:
      #                  answer = float(number)/ answer 
      #            self.ids.update_label.text =str(1/answer)
      #      else:
      #         pass
   def delete(self):
           value = self.ids.update_label.text 
           self.ids.update_label.text = '0'


  #adding the valus enter
  
   
class TainApp(App):

    def build(self):
      return MyLayout()
if __name__=='__main__':
  TainApp().run()