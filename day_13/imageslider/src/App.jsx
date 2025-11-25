import { useState } from "react";


function App() {

  
  const images = [ "https://picsum.photos/id/1015/1200/800",
    "https://picsum.photos/id/1018/1200/800",
    "https://picsum.photos/id/1025/1200/800",
    "https://picsum.photos/id/1035/1200/800",
   
   
  ]
  
  const [index, setIndex] = useState(0);

  const prev = () => setIndex((index - 1 + images.length) % images.length);

  const next = () => setIndex((index + 1) % images.length);

  return (
    <>
      <div className="img-slider">
        <h1>Image Slider</h1>
        <img src={images[index]} alt="image-here" />
        <div className="slider-btn">
            <button onClick={prev}>left</button>
            <button onClick={next}>right</button>
        </div>
      </div>
    </>
  )
}

export default App