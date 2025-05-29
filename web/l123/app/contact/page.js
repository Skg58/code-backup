import React from 'react'
import Script from 'next/script'

const Contact = () => {
  return (
    <div>
      <Script>
            {`alert("Wecome to contact page");`}
        </Script>
      i am contact
    </div>
  )
}

export default Contact

export const metadata = {
    title: "Contact Facebook - Connect with the world",
    description: "This is a page where you can contact facebook and we can connect with the world using facebook",
  };
