# Created by: Victoria Le
# Created on: Aug 27,2016
# Created for: ICS3U
# This program is the object drop program for assignment 2

import ui

def calculate_button_touch_up_inside(sender):
    #calculate area and perimeter
    
    #constant
    gravity = 9.81
    
    #input
    seconds = float(view['seconds_textbox'].text)
    
    #process
    height = 100 - (0.5) * gravity * pow(seconds,2)
    
    #output
    view['height_answer_label'].text = 'The height of the object above the ground:' + str(height)

view = ui.load_view()
view.present('full_screen')
