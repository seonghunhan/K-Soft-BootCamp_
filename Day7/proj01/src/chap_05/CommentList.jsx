import React from "react";
import Comment from "./Comment" ;

const comments = [
    {
        name : "김인핟",
        comment : "우여우 재밌어요!"
    },
    {
        name : "박인하",
        comment : "본방사수!"
    },
    {
        name : "우지수",
        comment : "우지수 재밌다!"
    }
]

function CommentList(props){
    return (
        <div>
            {comments.map(
                (comment)=>{
                    return (<Comment name={comment.name} comment={comment.comment}/>)    
                }
            )}
        </div>
    )
}
export default CommentList