class SecondActivity < Android::App::Activity
  def onClick(view)
    i = Android::Content::Intent.new(self, MainActivity)
    startActivity(i)
  end

  def onCreate(savedInstanceState)
    super

    relativeLayout = Android::Widget::RelativeLayout.new(self)

    @button = Android::Widget::Button.new(self)
    @button.text = "go to screen 1"

    @button.onClickListener = self

    relativeLayout.addView(@button)
    self.contentView = relativeLayout
  end
end
