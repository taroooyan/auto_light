class LightController < ApplicationController
  def on
    render text: "on"
    # str = '1'
    # com = open("/dev/ttyACM0","r+")
    # system(" stty < /dev/ttyACM0 9600")
    # sleep(2)
    # com.write str
    # sleep(2)
    # com.write 'end'
    # sleep(2)
    # com.close()
  end

  def off
    render text: "off"
    # str = '1'
    # com = open("/dev/ttyACM0","r+")
    # system(" stty < /dev/ttyACM0 9600")
    # sleep(2)
    # com.write str
    # sleep(2)
    # com.write 'end'
    # sleep(2)
    # com.close()
  end
end
