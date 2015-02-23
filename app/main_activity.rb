class MainActivity < Android::App::Activity
  def onClick(view)
    i = Android::Content::Intent.new(self, SecondActivity)
    startActivity(i)
  end

  def onCreate(savedInstanceState)
    super

    relativeLayout = Android::Widget::RelativeLayout.new(self)

    @button = Android::Widget::Button.new(self)
    @button.text = "go to screen 2"

    @button.onClickListener = self

    relativeLayout.addView(@button)
    self.contentView = relativeLayout
  end
end
