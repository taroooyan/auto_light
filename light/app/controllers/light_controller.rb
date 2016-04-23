class LightController < ApplicationController
  def index
  end

  def on
    render text: "証明がONになりました"
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
    render text: "証明がOFFになりました"
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
